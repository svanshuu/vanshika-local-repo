//  let day=2;
//  let dayname;
//  if(day==1)
//  {
//     dayname="MONDAY"
//  }
//  if(day==2)
//     {
//        dayname="tuesDAY"
//     }
//    else if(day==3)
//         {
//            dayname="wednesDAY"
//         }
//         else if(day==4)
//             {
//                dayname="thrushDAY"
//             }
//             else if(day==5)
//                 {
//                    dayname="friday"
//                 }
//                 else if(day==6)
//                     {
//                        dayname="saturday"
//                     }
// else {
//     dayname="sunday"
// }            
// console.log(dayname);

// for (let i=0;i<=15;i++)
// {
//     if (i===6)
//     {
//         break;
//     }
//     console.log(i);
// }
let num=20;
// for(let i=0;i<=20;i++)
// {
//     if(i%2==0)
//     {continue;
//         //console.log(i,"is even no")
//     }
//     console.log(i)
// }
   //let ,var,constant

//    let sum=function(num1, num2)
//    {
//     console.log(num1+num2);
//    }
//    sum(45, 89);

// const greet1 =(greet2)=>{
//     console.log("i am first function");
//     //console.log(greet2);
// //   setTimeout(() => {
// //     greet2();
// //   },2000);  
// // };
// setInterval(() => {
//     greet2();
// }, 3000);}
// const greet2=()=>{
// console.log("i m second function");
// };
// greet1(greet2);
 let promise =new promise((resolve,reject)=>
{
    let sucess=false;
    if (sucess){
        resolve("call connected");

    }
    else{
        reject("call disconnect");
    }
});
promise.then((message)=>{
    console.log(message)
});

 