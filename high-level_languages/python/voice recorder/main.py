import sounddevice as sd
from scipy.io.wavfile import write
import numpy as np
import wavio as wv

frequency  = 56100  # Sample frequency
duration = 15  # seconds

# Record audio
print("Recording...")
myrecording = sd.rec(int(duration * frequency), samplerate=frequency, channels=1, dtype='int16')

sd.wait()  # Wait until recording is finished
print("Recording finished")

# Save as WAV file
write("output.wav", frequency, myrecording)  # Using scipy
wv.write("output_wavio.wav", myrecording, frequency, sampwidth=2)  # Using wavio

# Save as MP3 file
# Note: You need to install pydub and ffmpeg for this to work
from pydub import AudioSegment
audio = AudioSegment(
    myrecording.tobytes(),
    frame_rate=frequency,
    sample_width=myrecording.dtype.itemsize,
    channels=2
)
audio.export("output.mp3", format="mp3")  # Save as MP3
