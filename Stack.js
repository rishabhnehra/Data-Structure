class Stack {
    length = 0
    arrayData = [];

    push(data) {
        this.arrayData[this.length] = data;
        this.length++;
    }

    pop() {
        if (this.length == 0) {
            return undefined;
        }

        this.length--;
        const data = this.arrayData[this.length];
        this.arrayData.splice(this.length, 1);
        return data;
    }

    peek() {
        return this.arrayData[this.length - 1];
    }

    count() {
        return this.length;
    }
}

let stack = new Stack();
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);
stack.push(5);

console.log(stack.count());

stack.pop();
stack.pop();

console.log(stack.peek());
console.log(stack.count());