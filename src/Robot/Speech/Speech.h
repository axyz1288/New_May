#include <thread>
#include <chrono>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>

using namespace std;

class Speech
{
public:
    Speech();
    ~Speech();

    std::string GetSubData(void);
    std::string GetPubData(void);

    void SetPubData(std::string str);
    void DeleteThread(void);

private:
    /* Listener */
    ros::NodeHandle n;
    ros::Subscriber subber;

    std::string receive_str;

    void chatterCallback(const std_msgs::String::ConstPtr &msg);
    void Sub(void);

    /* Talker */
    ros::Publisher pubber;
    void Pub(string str);

private:
    std::string Pub_str;
    std::string Sub_str;

    thread *PubThread;
    thread *SubThread;

    bool is_deleted;

    void SubFromPython();
    void PubToPython();
    void test();
};