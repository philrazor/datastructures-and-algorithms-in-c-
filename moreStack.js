// javascript
// stacks

this.stack = function(){
    this.count  = 0
    this.storage={}
    // create a push function
    
    this.push=function(value){
        this.storage[this.count]=value ;
        this.count ++
    }
    // create the pop to remove last element function
    this.pop=function(){
        if(this.count===0){
            return undefined
        }
        this.count--
        var result = this.storage[this.count]
        delete this.storage[this.count]
        return result
    }
    
    // size of the object
    this.size=function(){
        return this.count
    }
    // peek the last value at the stack{the top element}
    this.peek=function(){
        return this.storage[this.count-1]
    }
}
myStack=new stack()

myStack.push(2)
myStack.push(3)
myStack.push(4)
myStack.push(6)
console.log(myStack.peek())
console.log(myStack.pop())
console.log(myStack.pop())
console.log(myStack.peek())
