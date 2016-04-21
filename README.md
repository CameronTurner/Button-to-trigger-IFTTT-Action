# ParticleProjects
Public code for others to use on Particle photon

This code will let you attach two buttons to Pins D0 and D1 to trigger them to active IFTTT.

The buttons should be connected to the GND pin on the photon to the button, 
then from the other side of the button to the pin D0 or D1.


As a diagram written in text:
 
 GND Pin > Button > D0
 GND Pin > Button > D1
 
 Be careful - don't send the 5V (VIN) or 3V (3V3) into the D0 or D1 pin! Just the ground line.
