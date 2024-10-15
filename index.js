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

	get(index){
		// console.log(this.data[item])
		if (!this.data[index]){
			return 'data is not found'
		}
		return this.data[index]
	}

	pop(){
		const lastItem = this.length - 1;
		delete this.data[lastItem];
		this.length--
		return lastItem
	}
}

const myNewArray = new MyArr()

myNewArray.push('apple');
myNewArray.push('orange');
myNewArray.push('mango');
myNewArray.push('coklat');
myNewArray.push('coconut');



console.log(myNewArray)
console.log(myNewArray.get(0))
myNewArray.pop()
console.log(myNewArray)

//  myArray.pop() =>


const item = [1, 2, 3, 4, 5, 6]
