# ParticleProjects
Public code for others to use on Particle photon

This code will let you attach two buttons to Pins D0 and D1 to trigger them to active IFTTT.

The buttons should be connected to the GND pin on the photon to the button, 
then from the other side of the button to the pin D0 or D1.


As a diagram written in text:
 
 GND Pin > Button > D0
 GND Pin > Button > D1
 
 Be careful - don't send the 5V (VIN) or 3V (3V3) into the D0 or D1 pin! Just the ground line.

***
Once you have sent a trigger to IFTTT, you need to configure an IFTTT.com recipe (https://ifttt.com/recipes) to do something.
1. Select the Channel "Particle" as you are creating the "IF" part of the "IF this then THAT". 
2. When you select the Channel - enter your login details etc. as you registered them on your Particle Mobile App.
3. Then select the option 'New event published'
4. Then in 'event name' put 'trigger'
5. Then in 'is' put 1 for when D0 is triggered by the button then 2 for D1 is triggered by the button

 Tip 1: You can change the word 'trigger' and '1' and '2' to be anything you want in the Particle photon code.
 Tip 2: You'll need to create TWO recipes if you have TWO buttons, 3 recipies for 3 buttons etc... As you can only have 1 published event detected per recipe.
