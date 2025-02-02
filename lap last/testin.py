import cv2
import numpy as np
from ultralytics import YOLO

def calculate_ratio(length1, length2):
    if length2 == 0:
      return 0
    return length1 / length2

def is_golden_ratio(ratio, tolerance=0.1):
    golden_ratio = 1.618
    return golden_ratio - tolerance <= ratio <= golden_ratio + tolerance


def detect_face_and_check_golden_ratio(image_path):
    # Load YOLOv8 model
    model = YOLO("yolov8n-face.pt")  # You can change 'n' to 's', 'm', or 'l' for different sizes

    # Read the image
    image = cv2.imread(image_path)

    if image is None:
        print("Error: Could not read image.")
        return

    # Run YOLO face detection
    results = model.predict(image)

    # Draw rectangles on faces and print ratios
    for result in results:
        boxes = result.boxes.xyxy.int().tolist()
        for box in boxes:
            x1, y1, x2, y2 = box

            # Calculate bounding box dimensions
            width = x2 - x1
            height = y2 - y1
            
            # Calculate the facial proportion
            face_ratio = calculate_ratio(height, width)

            # Print Results
            print(f"Face Rectangle: x1:{x1}, y1:{y1}, x2:{x2}, y2:{y2}")
            print(f"Face Height: {height}")
            print(f"Face Width: {width}")
            print(f"Height/Width Ratio: {face_ratio:.3f}")
            
            if is_golden_ratio(face_ratio):
                print("Height/Width Ratio matches the golden ratio!")
            else:
                print("Height/Width Ratio does not matches the golden ratio")

            # Draw rectangle on the image
            cv2.rectangle(image, (x1, y1), (x2, y2), (0, 255, 0), 2)

    # Display the image with rectangles
    cv2.imshow("Face Detection", image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

if __name__ == "__main__":
    image_path = "face_example.jpg"  # Replace with the path to your image
    detect_face_and_check_golden_ratio(image_path)