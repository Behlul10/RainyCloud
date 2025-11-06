import csv
import serial

PORT = "/dev/cu.usbmodem2101"  # my arduino uno port
BAUD = 115200
OUTFILE = "data.csv"


with serial.Serial(PORT, BAUD, timeout=1) as ser, open(OUTFILE, "w", newline="") as f:
    writer = csv.writer(f)
    # If your Arduino prints a header first, you can read it; otherwise write one:
    writer.writerow(["timestamp_ms", "sensor1", "sensor2"])
    print(f"Logging from {PORT} at {BAUD} to {OUTFILE}. Ctrl+C to stop.")
    try:
        while True:
            line = ser.readline().decode("utf-8", errors="ignore").strip()
            if not line:
                continue
            parts = [p.strip() for p in line.split(",")]
            writer.writerow(parts)
    except KeyboardInterrupt:
        print("Stopped.")
