# tomatotchi
##Project Description
Similar to the classic childrens' game the Tamagotchi, the Tamatotchi project creates a space for an electronic pet. In this case however, we have created a link to a real living plant with sensors and communications. The Tamatotchi allows the owner to view sensor readouts for temperature, moisture, and light level values over a bluetooth connection to an android device running an app from MIT's app inventor interface.

##Dependencies
In order to function, firmware found in the firmware folder must be uploaded to a microcontroller. This particular firmware was designed for Atmel atmega328P chip. Also, MIT appinventor companion software must be installed into an android device. There were no specific special eagle libraries used. The "wire" library for Arduino was used to interface with the TC-74 temperature sensor chip.

##BOM
This project has a very limited BOM. Please refer to the eagle schematic files in the schematic folder in order to identify the parts you need. Using an Arduino Uno is suggested.

##Software
Software was written using MIT App Inventor and can be found in the tomatotchi_software folder.

##Description of operation
Connect the hardware as shown in the schematic. The resistor labeled "soil" is simply two wires inserted into the soil. Power the arduino and then open the appinventor companion software on the android. Open the tomatotchi program provided in the software folder using the appinventor companion and press connect to connect to the bluetooth device. I have been having problems with connecting to the bluetooth reliably using my device and sometimes it takes several attempts before it connects. Don't give up, just keep trying until it connects. The sensor outputs will update every 30 seconds and will report error messages if the readings are out of the programmed bounds. You can change the bounds for the ideal plant conditions by adjusting the values in the "if then" statements in both the app inventor code and the arduino firmware code. The arduino will play a "happy" mario tune if the plant is within the nominal range for its sensor readings. It will play an "angry" mario tune if it is not. Enjoy!!
