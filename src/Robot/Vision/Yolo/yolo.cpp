#include "yolo.h"
Yolo::Yolo()
{
    std::string homepath = getenv("HOME");
    this->yolo_dir = homepath + "/catkin_ws/src/may/src/Vision/Yolo";
}
Yolo::~Yolo()
{
}
void Yolo::OpenDetector()
{
    this->yolo_detector = new Detector(this->cfg_file, this->weights_file);
}
std::vector<std::string> Yolo::objects_names_from_file(std::string const filename)
{
    std::ifstream file(filename);
    std::vector<std::string> file_lines;
    if (!file.is_open())
        return file_lines;
    for (std::string line; getline(file, line);)
        file_lines.push_back(line);
    std::cout << "object names loaded \n";
    return file_lines;
}
void Yolo::draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec, std::vector<std::string> obj_names, int current_det_fps, int current_cap_fps)
{
    int const colors[6][3] = {{1, 0, 1}, {0, 0, 1}, {0, 1, 1}, {0, 1, 0}, {1, 1, 0}, {1, 0, 0}};

    for (auto &i : result_vec)
    {
        cv::Scalar color = obj_id_to_color(i.obj_id);
        cv::rectangle(mat_img, cv::Rect(i.x, i.y, i.w, i.h), color, 2);
        if (obj_names.size() > i.obj_id)
        {
            std::string obj_name = obj_names[i.obj_id];
            if (i.track_id > 0)
                obj_name += " - " + std::to_string(i.track_id);
            cv::Size const text_size = getTextSize(obj_name, cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, 2, 0);
            int const max_width = (text_size.width > i.w + 2) ? text_size.width : (i.w + 2);
            cv::rectangle(mat_img, cv::Point2f(std::max((int)i.x - 1, 0), std::max((int)i.y - 30, 0)),
                          cv::Point2f(std::min((int)i.x + max_width, mat_img.cols - 1), std::min((int)i.y, mat_img.rows - 1)),
                          color, CV_FILLED, 8, 0);
            putText(mat_img, obj_name, cv::Point2f(i.x, i.y - 10), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 0, 0), 2);
            std::string obj_id_str = std::to_string(i.obj_id);
            putText(mat_img, obj_id_str, cv::Point2f(i.x, i.y - 20), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 0, 0), 2);
        }
    }
    if (current_det_fps >= 0 && current_cap_fps >= 0)
    {
        std::string fps_str = "FPS detection: " + std::to_string(current_det_fps) + "   FPS capture: " + std::to_string(current_cap_fps);
        putText(mat_img, fps_str, cv::Point2f(10, 20), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(50, 255, 0), 2);
    }
}
void Yolo::show_console_result(std::vector<bbox_t> const result_vec, std::vector<std::string> const obj_names)
{
    for (auto &i : result_vec)
    {
        if (obj_names.size() > i.obj_id)
            std::cout << obj_names[i.obj_id] << " - ";
        std::cout << "obj_id = " << i.obj_id << ",  x = " << i.x << ", y = " << i.y
                  << ", w = " << i.w << ", h = " << i.h
                  << std::setprecision(3) << ", prob = " << i.prob << std::endl;
    }
}

void Yolo::target_obj_center(std::vector<int> obj_id_list, std::vector<int> &result_id, std::vector<cv::Point> &center_list)
{
    result_id.clear();
    center_list.clear();
    this->Obj_list.clear();

    for (int i = 0; i < obj_id_list.size(); i++)
    {
        for (int j = 0; j < this->result_vec.size(); j++)
        {
            if (this->result_vec[j].obj_id == obj_id_list[i])
            {
                cv::Point tmp;
                tmp.x = this->result_vec[j].x + this->result_vec[j].w / 2;
                tmp.y = this->result_vec[j].y + this->result_vec[j].h / 2;
                result_id.push_back(this->result_vec[j].obj_id);
                center_list.push_back(tmp);
                this->Obj_list.push_back(this->result_vec[j]);
            }
        }
    }
}