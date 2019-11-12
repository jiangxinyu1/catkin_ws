#ifndef  READFILE_H
#define READFILE_H

#include <vector>
#include <eigen3/Eigen/Core>
#include <iostream>


//max 3000
#define READ_DATA_NUMBER  100

/*  
    激光数据的结构。用vector存储从文件读进来的角度和距离
*/
typedef struct general_laser_scan
{
    std::vector<double> range_readings;
    std::vector<double> angle_readings;
}GeneralLaserScan;

/*  
    读取位姿信息的函数
    参数是字符串path，和存储三维向量的vector-poses
*/
void ReadPoseInformation(const std::string path,std::vector<Eigen::Vector3d>& poses);

/*  
    读取激光数据的函数
    用字符串表示两个文件路径
    用vector存储雷达数据的结构对象
*/
void ReadLaserScanInformation(const std::string anglePath,
                              const std::string laserPath,
                              std::vector< GeneralLaserScan >& laserscans);

#endif
