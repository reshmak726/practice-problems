
from socket import timeout
import time
from plyer import notification

if __name__=="__main__":
    while True:
        notification.notify(
            title="please drink water",
            message="drink water",
            timeout=10
        )
        time.sleep(60*60)