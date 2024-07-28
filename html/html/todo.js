let todoValue=""
let handleChange=(event)=>{
    todoValue= event.target.value;
}
let handleClick=()=>{
    let list=document.getElementById('list');
    let li= document.createElement("li");
    li.textContent=todoValue;
    li.className="list-style";
    list.appendChild(li);
     console.log(list);
     let delBtn =document.createElement("button");4
     delBtn .textContent="DElete";
     li.appendChild(delBtn);
     delBtn.onclick=()=>
    {
        list.removeChild(li);
    };
    // window.location.reload();
    // window.location.href="https://www.snapchat.com/";


    const hi= async()=>
    {
        let message= await"good";
        console.log(message);
};
const hleo=()=>
{
console.log("hello");
};
}

