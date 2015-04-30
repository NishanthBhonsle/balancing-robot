Balancing-robot
=================

Balancing a ball on an inclined beam.
-------------------------------------

> ## BRIEF DESCRIPTION
>
>  Using PID controller, Arduino and servo motors successfully balanced a ball on beam. Using proximity sensors the exact location of the ball on the beam is being calculated and is being given as input to the arduino. Depending on the position of the ball the arduino drives the servo motors and thereby balances the ball accordingly.
>

> ### COMPONENTS REQUIRED
> + ARDUINO UNO
> + ULTRASONIC SENSOR
> + 20 Kg.cm SERVO MOTOR
> + 5V DC POWER SUPPLY

> ### WORKING
> Basically a ball is to be balanced on an inclined elevation, so a centre point value of the beam is to be initialized in the code for the arduino to drive the servo motors.
> The ultrasonic sensor detects the position of the ball and triggers the arduino in such a way that it drives the servo motor clockwise or anti-clockwise accordingly in order to balance the ball on the beam. 
> The 4-bar mechanism is designed in such a way that one of them is fixed and the servo rotates in such a way that the beam is tilted and the ball is balanced accordingly.

