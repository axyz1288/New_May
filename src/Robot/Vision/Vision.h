#pragma once
#include "../Vision/ImageProcessing/ImageProcessing.h"
#include "../Vision/ImageConverter/image_converter.h"
#include "../Vision/PclConverter/pcl_converter.h"
#include "../Vision/MouseEvent/mouse_event.h"
// #include "../Vision/Yolo/yolo.h"

class Vision
{
public:
  Vision();
  ~Vision();

  ImageConverter *CImageConverter;
  PclConverter *CPclConverter;
  MouseEvent *CMouseEvent;
  ImageProcessing *CImageProcessing;
  // Yolo *CYolo;
};