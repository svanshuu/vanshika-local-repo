import pytesseract
from PIL import Image
image=Image.open(r'C:\Users\svans\OneDrive\Documents\image.png')
text=pytesseract.image_to_string(image)
print(text)