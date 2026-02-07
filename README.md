# ESP32 Motion-Controlled Pomodoro Timer

This project is my approach at getting better by doing. It explores modular embedded system design, by separation the motion input device from the main control unit. The motion module acts as a tilt based user input mechanism, similar to a rotary encoder. 

## Planned Features
- OLED UI (work/break/paused)
- Buzzer alerts
- Tilt-based time adjustment (MPU6050 on separate breadboard)
- Non-blocking timer using millis()

## Hardware
- ESP32
- MPU6050 (motion module)
- SSD1306 OLED (I2C)
- Active buzzer
- Push buttons

## Repo layout
- `/experiments` – hardware bring-up tests (buttons, MPU6050, buzzer)
- `/PomodoroTimer` – integrated firmware (Arduino IDE, in progress)
- `/docs` – wiring and design notes
