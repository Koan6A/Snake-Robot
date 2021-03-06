/*----------*/
/* MACROS   */
/*----------*/
//-- Degrees to radians conversion
#define DEG2RAD(X) M_PI*X/180.0


/*-----------------------------------------------------------*/
/*--                       CONSTANTS                       --*/
/*-----------------------------------------------------------*/

/*-------------------*/
/*-      SNAKE       */
/*-------------------*/
#define MOD 16          //-- Number of modules

/*-------------------*/
/*-      MODULES     */
/*-------------------*/
#define L         0.072     //-- Length. In meters
#define W         0.052     //-- Width. In meters
#define H         W         //-- Height. In meters
#define MASS      0.05      //-- Weight. In Kg

/*-------------------*/
/*-   SERVOS         */
/*-------------------*/
#define TORQUE    20        //-- Servo torque in N.m. 
                            //-- 0.314 N.m for The Futaba 3003 model
//-- Servo maximum angular velocity, in rad/sec
#define WMAX 13.0*M_PI/9.0


/*---------------------*/
/* SERVO CONTROLLER    */
/*---------------------*/
//-- Servo controller 
#define KP        8.3          

//-- Maximum error in position (in degrees). If the distance between the
//-- current servo position and the reference position is less than ERROR,
//-- the controller will assume the reference position has been reached
#define ERROR     DEG2RAD(5)  

//-- Number of total samples for the sinusoidal functions that determine the
//-- servo reference positions
#define N 32

/*-----------------------*/
/* VISUALIZATION         */
/*-----------------------*/

//-- View scale
#define VIEW_SCALE 10

//-- Pause between two simulation step (in micro seconds)
//-- This constant should be changed according the computer speed. 
//-- If the simulation runs very fast, PAUSE should be increased.
#define PAUSE       1   

/*-------------------*/
/* ODE CONSTANTS     */
/*-------------------*/
//-- friction coefficients
#define MU                   0.2
#define MU2                  MU

//-- Gravity constant (in meters/s^2)
#define GRAVITY_CTE         -9.81

//-- Other ODE parameters
#define CFM                  1e-5
#define ERP                  0.2
#define MAX_CORRECTING_VEL   0.1
#define SURFACE_LAYER        0.0001
#define STEP                 0.01
#define BOUNCE               0.1
#define BOUNCE_VEL           0.1
#define SOFT_CFM             0.01
#define MAX_CONTACTS         4		




