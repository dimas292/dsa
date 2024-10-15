function createStack() {
	const items = [];

	return {
		// menambahkan stack
		push(item) {
			items.push(item);
		},

		// menghapus element teratas dari data stack
		pop() {
			if (this.isEmpty()) {
				return "Stack kosong";
			}
			return items.pop();
		},

		peak() {
			return items[items.length - 1];
		},

		// mengecek apaa stack kosong
		isEmpty() {
			return items.length === 0;
		},

		printStack() {
			console.log(items.join(" -> "));
		},

		size() {
			return items.length;
		},
	};
}

const stack = createStack();
stack.push(1);
stack.push(2);
stack.push(3);
console.log("semua data stack");
stack.printStack();
console.log(stack.peak());

console.log(stack.size());
