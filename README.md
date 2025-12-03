# BloodSugarMonitor
A non-invasive wearable blood sugar monitoring system using sensors and machine learning. This project focuses on designing a cost-effective prototype that can help individuals continuously monitor their glucose trends using optical and bio-signal methods.


## 📌 Project Overview

This project focuses on designing a **non-invasive blood sugar (glucose) monitoring system** using various physiological sensor inputs. Instead of drawing blood, the system uses optical and bio-signal methods to estimate glucose levels.

The aim is to build a cost-effective prototype that can help individuals continuously monitor their glucose trends.

## 🎯 Key Features

- **Non-invasive monitoring** using PPG (photoplethysmography) sensors
- **Real-time data collection** from multiple physiological sensors
- **Machine Learning model** for glucose level prediction
- **Cost-effective hardware** using Arduino and accessible components
- **Continuous monitoring** capability

## 🛠️ Hardware Used

- **MAX30102** - PPG (Photoplethysmography) Sensor
- **GSR Sensor** - Galvanic Skin Response
- **NTC Thermistor** - Temperature Sensor
- **Arduino Nano/ESP32** - Microcontroller
- **Supporting components** - Resistors, Capacitors, PCB

## 📐 System Architecture

```
Sensors → Data Collection → Arduino → Serial Communication → Python Processing → ML Model → Prediction
```

## 🧠 Machine Learning Model

### Models Tested:
- Random Forest Regressor
- Linear Regression
- Gradient Boosting

## 📊 Results

(Insert your actual results and graphs here)


## 🔧 How to Run

### 1. Collect Data

Upload Arduino code → connect sensors → log serial data.

### 2. Preprocess Data

```bash
python python/preprocess.py
```

### 3. Train Model

```bash
python python/train_model.py
```

### 4. Predict Results

```bash
python python/predict.py <input_file.csv>
```

## 📅 Future Improvements

- Enhanced ML model accuracy
- Mobile app integration
- Cloud data storage
- Real-time dashboard UI
- Wearable device miniaturization
- Multi-modal sensor fusion

## 👤 Author

**Satwik Manda**
- Electronics & AI-ML
- Wearables | Biomedical Hardware

Feel free to connect!

## 📜 License

This project is open source and available under the MIT License.

---

*For detailed hardware connections, see [hardware/connections.md](hardware/connections.md)*
