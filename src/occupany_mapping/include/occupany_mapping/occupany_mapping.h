#ifndef OCCUPANY_MAPPING_H
#define OCCUPANY_MAPPING_H

#include <iostream>
#include <vector>

#include <ros/ros.h>

#include <eigen3/Eigen/Core>

#include "readfile.h"

/*
    删格下标的结构体
*/
typedef struct gridindex_
{
    int x;
    int y;

    void SetIndex(int x_,int y_)
    {
        x  = x_;
        y  = y_;
    }
}GridIndex;


/*  
    地图结构体
    定义了一些地图的参数

*/
typedef struct map_params
{
    double log_occ,log_free;
    double log_max,log_min;
    double resolution;
    double origin_x,origin_y;
    int height,width;
    int offset_x,offset_y;
}MapParams;

MapParams mapParams;

unsigned char* pMap;


#endif

