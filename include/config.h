#ifndef CONFIG_H
#define CONFIG_H

#define I2C_SDA_GPIO 21
#define I2C_SCL_GPIO 22
#define I2C_PORT I2C_NUM_0

#define STEP_PIN GPIO_NUM_17
#define DIR_PIN GPIO_NUM_16
#define EN_PIN GPIO_NUM_4

#define GEAR_RATIO 13.0f
#define STEPS_PER_REV 200
#define MICROSTEPS 8

#define SPEED_FILTER_ALPHA 0.1f
#define SPEED_DEADBAND 0.01f

#define KP 0.0f
#define KI 0.0f
#define KD 0.0f
#define KF 1.0f

#define CONTROL_LOOP_FREQUENCY 100

#endif // CONFIG_H