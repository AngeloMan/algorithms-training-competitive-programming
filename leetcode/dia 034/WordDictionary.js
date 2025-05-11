class WordDictionary {
    constructor() {
        this.root = {};
        this.in = false;
    }

    addWord(word) {
        let i = 0, current = this;
        while (i != word.length){
            if (word[i] in current.root) current = current.root[word[i]];
            else{
                current.root[word[i]] = new WordDictionary();
                current = current.root[word[i]];
            }
            i++;
        }  
        current.in = true;
    }
    search(word) {
        function rec(index, current){
            if (index === word.length){
                if (current.in) return true;
                return false;
            }
            if (word[index] != '.'){
                if (word[index] in current.root) return rec(index + 1, current.root[word[index]]);
            }
            else{
                let a = Object.keys(current.root);
                for (let i = 0; i < a.length; i++){
                    if (rec(index + 1, current.root[a[i]])) return true;
                }
            }
            return false;
        }
        return rec(0, this);
    }
}