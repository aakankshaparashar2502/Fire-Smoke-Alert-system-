

https://github.com/user-attachments/assets/b64ea89f-5cb9-433f-ad51-3e54b096b769



https://github.com/user-attachments/assets/44be34f6-4776-4652-b4eb-3faa5e359fa1

# Fire-Smoke-Alert-system-
This project is an Arduino-based Fire and Gas Safety Alert System designed to detect potential fire hazards by monitoring both flammable gases and flames. The system uses an MQ-2 gas sensor to detect smoke and combustible gases, along with a flame sensor to detect the presence of fire. 
<img width="1600" height="922" alt="WhatsApp Image 2026-07-22 at 10 57 24 AM" src="https://github.com/user-attachments/assets/9f11d05a-504d-4bf7-9f16-6c7fce1a1da4" />


MQ-2 Sensor Warm-Up Requirement
The MQ-2 gas sensor requires a warm-up period before it provides stable and reliable readings. When the sensor is powered on, its internal heating element needs time to reach the proper operating temperature. During this period, the sensor output may fluctuate and should not be used for accurate gas detection. For best performance, allow the MQ-2 sensor to warm up for 30–60 seconds before taking measurements. A longer initial burn-in may further improve sensor stability.
Why the Flame Sensor is Active Low
The flame sensor used in this project is active low, which means its digital output becomes LOW (0) when a flame is detected and HIGH (1) when no flame is present.
This behavior is due to the onboard comparator circuit on the sensor module. When infrared light from a flame is detected, the comparator switches the output to LOW. Therefore, in the Arduino program:
LOW = Flame detected
HIGH = No flame detected
This logic must be considered while writing the detection code to ensure the alarm is triggered correctly.



  


  
    
