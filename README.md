# WENShopFan
Arduino code to turn on WEN 3410 shop fan.
The WEN 3410 uses the 433 MHZ frequency, and the generic 433 MHZ transmitters(ebay,amazon) work reliably for this project.
I tried using the RCSwitch library, but it did not work well.
I captured the RF codes using an SDR, and manually defined the cycles and pulse widths in the code.  Kinday hacky, but works reliably 100% of the time.
I added a ceiling mounted receptacle on a switch, and just have the arduino plugged into the same receptacle as the fan.  One second after power on the arduino sends the power on command 3 times, which sets the fan on high.

The schematics are trivial.  Just solder the vcc and gnd from the rf transmitter module to 5v and gnd on the arduino.  Solder a jumper between the data pin on the rf module and pin 10(in my case) to the arduino.
