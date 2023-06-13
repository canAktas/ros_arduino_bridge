/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
#define BIN1 8
#define BIN2 11
#define PWMB 9
#define AIN1 6
#define AIN2 7
#define PWMA 10
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
