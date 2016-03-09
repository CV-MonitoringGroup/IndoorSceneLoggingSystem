#pragma once
#include "sensor_client\kinectv2_client.h"

class IndoorSceneLoggingSystem
{
public:
	/**
	* �R���X�g���N�^
	*/
	IndoorSceneLoggingSystem();
private:
	sensor_client::KinectV2Client* kinectv2_client_;
private:
	void Init();
public:
	void Run();
};