class Trie{
    constructor(){
        this.root = {};
        this.in = false;
    }
    insert(word){
        let i = 0, current = this;
        while (i != word.length){
            if (word[i] in current.root) current = current.root[word[i]];
            else{
                current.root[word[i]] = new Trie();
                current = current.root[word[i]];
            }
            i++;
        }
        current.in = true;
    }
    search(word){
        let i = 0, current = this;
        while (i != word.length){
            if (word[i] in current.root) current = current.root[word[i]];
            else return false
            i++;
        }
        return current.in;
    }
    startsWith(word){
        let i = 0, current = this;
        while (i != word.length){
            if (word[i] in current.root) current = current.root[word[i]];
            else return false
            i++;
        }
        return true;
    }
}