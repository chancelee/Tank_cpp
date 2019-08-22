#pragma once
#include "Func.h"
#include <vector>
using namespace std;

class CTank;
class CMap;

class CMap
{
public:
	int m_nArrMap[MAP_X][MAP_Y] = { 空地 };
public:
	char* ShowMapFile();			//显示地图文件
	void LoadDefaultMap();			//系统默认地图
	void LoadMapFile(char* str, CMap &map);	//导入地图文件
	void SaveMapFile(vector<CTank>& myTank, vector<CTank>& enemyTank);//自定义地图

	void DrawStaticMap();						//打印边界
	void DrawDynamicMap();						//打印障碍
};

