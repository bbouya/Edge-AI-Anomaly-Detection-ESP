# Edge-AI-Anomaly-Detection-ESP
This project is an example demonstrating how to use python to train two different ML.
Data was captured using an ESP32 and MSA301 3-axis accelerometer taped to a ceiling fan,
Each sample is about 200 samples pf all 3axes captured over the course of 1 second. 
Fan was run at multiple speeds (OFF, LOW, Medium,High) with and without a weight.
1 'weight' is one US quarter taped to one of the fan's blades to create an offset motion.
All raw data is stored in the ceiling fan dataset directory.
Note that if you create a 'robust' model by moving the fan around during data collection, 
the Autoencoder works much better than the Mahalanobis Distance method.

