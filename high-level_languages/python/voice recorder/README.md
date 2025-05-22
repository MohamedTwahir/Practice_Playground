In this project i will be learning about sounddevice module and use it to create a voice recorder and play audio on it.
I will also use wavio module as well as scipy  to provide a way to save the audio that i will be recorded, it is a beginner project and so am i.

For whomever wants to try this on your local machine, maybe to text or critic the project or even the code the following modules are required for running the project:
- sounddevice
this module will provide the function to play and record NUMPy arrays as audio signals. Can be installed using the following command:
```bash
pip install sounddevice
```
- wavio
save recorded audio file in WAV format. Can be installed using the following command:
```bash
pip install wavio
```
- scipy
this module will provide the function to read and write WAV files. Can be installed using the following command:
```bash
pip install scipy
```
## Project Flow

The project's flow is simple:

1. Record audio using the sounddevice module.
2. Save the recorded audio using wavio or scipy.
3. Play back the recorded audio to verify the recording.
4. Optionally, repeat the process or exit the program.

This step-by-step approach helps beginners understand how to capture, save, and play audio in Python.