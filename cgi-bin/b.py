from sense_hat import SenseHat
import time

sense= SenseHat()
sense.low_light = True
sense.flip_v()

b = (0, 0, 0)
a = (0, 255, 0)

arrow = [
    b, b, b, b, b, b, b, b,
    b, b, b, b, a, b, b, b,
    b, b, b, b, a, b, b, b,
    b, b, b, b, a, b, b, b,
    b, b, b, b, a, b, b, b,
    b, b, a, b, a, b, a, b,
    b, b, b, a, a, a, b, b,
    b, b, b, b, a, b, b, b,
]
sense.set_pixels(arrow)
sense.set_rotation(90)
