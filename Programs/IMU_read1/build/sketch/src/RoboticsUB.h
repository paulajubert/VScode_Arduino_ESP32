#line 1 "C:\\Users\\manel.puig\\OneDrive - Universitat de Barcelona\\Documents\\02_Docencia_Manel\\Classes_PROJ\\TP\\VScode_Arduino_ESP32\\Programs\\IMU_read1\\src\\RoboticsUB.h"
/******************************************************************************
RoboticsUB.h - MPU Arduino library.
Copyright (C) 2020  Albert Álvarez-Carulla
Repository: https://github.com/Albert-Alvarez/roboticsub-imu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef ROBOTICS_UB
#define ROBOTICS_UB

#include "SparkFunMPU9250-DMP.h"

class IMU: public MPU9250_DMP {
    public:
        IMU();
        void Install(void);
        void ReadSensor(void);
        float * GetQuaternion(void);
        float * GetRPW(void);
};

#endif