# Mini-Detecto: AI-Based Fruit Classification and Sorting 🍏🍌

## Overview
Mini-Detecto is an AI-based fruit classification and sorting system that uses deep learning to distinguish between apples and bananas. The project integrates machine learning, computer vision, and embedded systems to achieve automated fruit recognition and sorting using a servo motor.

## Features
- ✅ **Machine Learning Models:** Implements ANN, CNN, and ResNet for classification.  
- ✅ **Dataset Preparation:** Custom dataset of apples and bananas with data augmentation.  
- ✅ **Model Training & Evaluation:** Success rate analysis across different models.  
- ✅ **Hardware Integration:** Uses a servo motor to sort classified fruits.  
- ✅ **Real-Time Prediction:** Classifies and sorts fruit images automatically.  

## Project Structure
    Mini-Detecto/
    │── Dataset/                  # Training dataset (fresh apples & fresh bananas)
    │── TestDataset/                  # Test dataset (fresh apples & fresh bananas)
    │── scripts/                  
    │   ├── Project_Code.ipynb     # Model training and evaluation
    │   ├── success_rate_test.py  # Evaluates success rate of models
    │── hardware/                 
    │   ├── servo_control.ino     # Arduino code for servo control                  
    ├── classification_demo.mp4  # Video of working project
    │── README.md                 # Project documentation

## Dataset
The dataset contains images of fresh apples and bananas, stored in:  
📁 `dataset/freshapples/`  
📁 `dataset/freshbanana/`  

## Machine Learning Models
Three different models were trained and evaluated:  
- **Artificial Neural Network (ANN)** → Success Rate: **70.0%**  
- **Convolutional Neural Network (CNN)** → Success Rate: **73.75%** (Best Performance)  
- **Residual Network (ResNet)** → Success Rate: **71.25%**  

## Hardware Integration
The classified fruit is sorted using a **servo motor**, controlled by an **Arduino** running the `servo_control.ino` script.

## Installation & Setup
```bash
# Clone the Repository
git clone https://github.com/Gaafoor/Mini-Detecto.git
cd Mini-Detecto

# Install Dependencies
pip install numpy pandas tensorflow keras opencv-python matplotlib

# Train the Model
jupyter notebook train_model.ipynb

# Test Success Rate
python success_rate_test.py

# Deploy on Hardware
# Upload 'servo_control.ino' to Arduino using the Arduino IDE.
