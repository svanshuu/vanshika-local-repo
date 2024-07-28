
function showTime() {
    
    let time = new Date("2024-07-23");
    let hour = time.getHours();
    let min = time.getMinutes();
    let sec = time.getSeconds();
    let am = "AM";
    let day= date.getday();

    
    if (hour >= 12) {
        if (hour > 12) hour -= 12;
        am = "PM";
    } else if (hour === 0) {
        hour = 12;
        am = "AM";
    }


    hour = hour < 10 ? "0" + hour : hour;
    min = min < 10 ? "0" + min : min;
    sec = sec < 10 ? "0" + sec : sec;

       
    let currentTime = hour + ":" + min + ":" + sec + " " + am;
    document.getElementById("clock").innerHTML = currentTime;
}


setInterval(showTime, 1000);


showTime();