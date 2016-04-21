//This code will let you attach two buttons to Pins D0 and D1 to trigger them to active IFTTT.
//The buttons should be connected to the GND pin on the photon to the button, then from the other side of the button to the pin D0 or D1
int inputPin1 = D0; // Button is connected to D0
int inputPin2 = D1; // Button is connected to D0
int led = D7;    // LED on Particle that is pin D7



void setup()
{
  pinMode(inputPin1, INPUT_PULLUP); // Initialize D3 pin as input with an internal pull-up resistor
  pinMode(inputPin2, INPUT_PULLUP); // Initialize D3 pin as input with an internal pull-up resistor
  pinMode(led, OUTPUT);          // Initialize D7 pin as output
}


void loop()
{
  int inputPin1State;
  int inputPin2State;

    inputPin1State = digitalRead(inputPin1);
    inputPin2State = digitalRead(inputPin2);

//first button checking state
  if(inputPin1State == LOW){      // Check State of the PIN (i.e. if the button has been pressed)
    digitalWrite(led, HIGH);   // Turn ON the LED
    Particle.publish("trigger","1");  //Send a message to IFTTT saying 'trigger' '1' has been activated
    delay(1000); // Wait 1 second so only one message is sent to IFTTT (as the loop function will run many times per second - we might not have let go of the button quickly enough in that time)
  }
  else
  {
    digitalWrite(led, LOW);  // Turn the LED off
  }

//onto the 2nd button checking state
  if(inputPin2State == LOW){      // Check State of the PIN (i.e. if the button has been pressed)
    digitalWrite(led, HIGH);   // Turn ON the LED
    Particle.publish("trigger","2");   //Send a message to IFTTT saying 'trigger' '2' has been activated
    delay(1000); // Wait 1 second so only one message is sent to IFTTT (as the loop function will run many times per second - we might not have let go of the button quickly enough in that time)
  }
  else
  {
    digitalWrite(led, LOW);  // Turn the LED off
  }


}
