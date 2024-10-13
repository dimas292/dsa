class MyArr {
	constructor() {
		this.length = 0;
		this.data = {};
	}

	push(item){
		this.data[this.length] = item
		this.length++
		return this.length
	}
}

const myNewArray = new MyArr()

myNewArray.push('apple')
myNewArray.push('orange')
myNewArray.push('mango')
myNewArray.push('coklat')

console.log(myNewArray)
