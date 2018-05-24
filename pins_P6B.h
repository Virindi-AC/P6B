#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "P6B 1.0"
#endif

//
// Servos
//
#define SERVO0_PIN		11
#define SERVO1_PIN		6
//#define SERVO2_PIN		5
//#define SERVO3_PIN		4

//
// Limit Switches
//
#define X_MIN_PIN		3
#define X_MAX_PIN		2
#define Y_MIN_PIN		14
#define Y_MAX_PIN		15
#define Z_MIN_PIN		18
#define Z_MAX_PIN		19

//
// Z Probe (when not Z_MIN_PIN)
//
//#ifndef Z_MIN_PROBE_PIN
//  #define Z_MIN_PROBE_PIN	32
//#endif

//
// Steppers
//
#define X_STEP_PIN		54
#define X_DIR_PIN		55
#define X_ENABLE_PIN		38
#define X_CS_PIN		53

#define X2_STEP_PIN		35
#define X2_DIR_PIN		33
#define X2_ENABLE_PIN		37
#define X2_CS_PIN		43

#define Y_STEP_PIN		60
#define Y_DIR_PIN		61
#define Y_ENABLE_PIN		56
#define Y_CS_PIN		49

#define Y2_STEP_PIN		31
#define Y2_DIR_PIN		29
#define Y2_ENABLE_PIN		32
#define Y2_CS_PIN		41

#define Z_STEP_PIN		46
#define Z_DIR_PIN		48
#define Z_ENABLE_PIN		62
#define Z_CS_PIN		40

#define Z2_STEP_PIN		25
#define Z2_DIR_PIN		23
#define Z2_ENABLE_PIN		27
#define Z2_CS_PIN		39

#define E0_STEP_PIN		26
#define E0_DIR_PIN		28
#define E0_ENABLE_PIN		24
#define E0_CS_PIN		42

#define E1_STEP_PIN		36
#define E1_DIR_PIN		34
#define E1_ENABLE_PIN		30
#define E1_CS_PIN		44



//
// Temperature Sensors
//
#define TEMP_0_PIN		13   // Analog Input
#define TEMP_1_PIN		15   // Analog Input
#define TEMP_BED_PIN		14   // Analog Input


#define HEATER_0_PIN		10
#define HEATER_1_PIN		9
#define FAN_PIN			8
#define HEATER_BED_PIN		7


//
// Misc. Functions
//
#define SDSS			47
#define LED_PIN			13

#ifndef FILWIDTH_PIN
  #define FILWIDTH_PIN		5   // Analog Input on AUX2
#endif

// define digital pin 4 for the filament runout sensor. Use the RAMPS 1.4 digital input 4 on the servos connector
#define FIL_RUNOUT_PIN		4

#if ENABLED(CASE_LIGHT_ENABLE) && !PIN_EXISTS(CASE_LIGHT)
    #define CASE_LIGHT_PIN	5      // MUST BE HARDWARE PWM
#endif
