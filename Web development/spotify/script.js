// Initialize the Variables
let songindex = 0;
let audioElement = new Audio('1.mp3');
let masterplay = document.getElementById('master_play');
let progressbar = document.getElementsByClassName('progressbar')[0];
let songname = document.getElementById('name_show');

let songs = [
    {songname: "Zarroori tha", filepath: "1.mp3", coverpath: "cover1.jpg"},
    {songname: "Uddariyaan", filepath: "2.mp3", coverpath: "cover2.jpg"},
    {songname: "Dil (Ek villein returns)", filepath: "3.mp3", coverpath: "cover3.jpg"},
    {songname: "Shaamat (Ek villein returns)", filepath: "4.mp3", coverpath: "cover4.jpg"},
    {songname: "Dhoke (By B praak)", filepath: "5.mp3", coverpath: "cover5.jpg"},
    {songname: "Dil Lauta Do", filepath: "6.mp3", coverpath: "cover6.jpg"},
    {songname: "Teri mitthi mitthi (By Jubin)", filepath: "7.mp3", coverpath: "cover7.jpg"},
    {songname: "Lut gaye (By Emraan Hasmi)", filepath: "8.mp3", coverpath: "cover8.jpg"},
    {songname: "Meri Aashiqui pasand aai", filepath: "9.mp3", coverpath: "cover9.jpg"},
    {songname: "Dil sambhal ja ", filepath: "10.mp3", coverpath: "cover10.jpg"},
    {songname: "Main jitna tumhe dekhu", filepath: "11.mp3", coverpath: "cover10.jpg"},
    {songname: "Main fir bhi tumko chaunga", filepath: "12.mp3", coverpath: "cover10.jpg"},
    {songname: "Pyaar tune kya kiya", filepath: "13.mp3", coverpath: "cover10.jpg"},
    {songname: "Tu hi hain aashiqui", filepath: "14.mp3", coverpath: "cover10.jpg"},
];

// Handle play/pause click
masterplay.addEventListener('click',()=>{
    if(audioElement.paused || audioElement.currentTime<=0){
        audioElement.play();
        masterplay.innerHTML="Pause";
    }else{
        audioElement.pause();
        masterplay.innerHTML="Play";
    }
})

// Update Seekbar
audioElement.addEventListener('timeupdate',()=>{
    let progress = parseInt((audioElement.currentTime/audioElement.duration)*100);
    progressbar.value=progress;
});

// Seek the progressbar
progressbar.addEventListener('change',()=>{
    audioElement.currentTime = progressbar.value*audioElement.duration/100;
})

Array.from(document.getElementsByClassName('play_button')).forEach((element)=>{
    element.addEventListener('click',(element)=>{
        songindex = parseInt(element.target.id);
        if(element.target.innerHTML==="Play"){
            element.target.innerHTML="Pause"
           }
           audioElement.src = `${songindex+1}.mp3`;
           audioElement.currentTime+0;
           audioElement.play();
           songname.innerText = songs[songindex].songname;
    });
})

document.getElementById('Next').addEventListener('click',()=>{
    if(songindex>=13){
        songindex=0;
    }else{
        songindex+=1;
    }
    audioElement.src = `${songindex+1}.mp3`;
           audioElement.currentTime+0;
           audioElement.play();
           songname.innerText = songs[songindex].songname;
});
document.getElementById('Previous').addEventListener('click',()=>{
    if(songindex<=0){
        songindex=9;
    }else{
        songindex-=1;
    }
    audioElement.src = `${songindex+1}.mp3`;
           audioElement.currentTime+0;
           audioElement.play();
           songname.innerText = songs[songindex].songname;
});