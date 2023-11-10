var array = [];
console.log(array)
let word = "bobl" ;
let rword = "" ;

for(i=0 ;i<word.length ;i++){
    array.push(word[i]);
}
for(i=0 ; i<word.length ;i++){
    rword+=array.pop()
}
if(word===rword){
    var message =  word + " is a palindrom"
    console.log(message)
}else{
    var messageError = word + "is not a palindrim"
    console.log(messageError)
}
