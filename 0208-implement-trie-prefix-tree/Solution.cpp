class Trie {
public:

    struct Node{

        Node* links[26];

        bool end=false;

        Node(){

            for(int i=0;i<26;i++){
                links[i]=NULL;
            }
        }
    };

    Node* root;

    Trie() {

        root=new Node();

    }

    void insert(string word) {

        Node* node=root;

        for(int i=0;i<word.size();i++){

            int index=word[i]-'a';

            if(node->links[index]==NULL){

                node->links[index]=new Node();

            }

            node=node->links[index];
        }

        node->end=true;
    }

    bool search(string word) {

        Node* node=root;

        for(int i=0;i<word.size();i++){

            int index=word[i]-'a';

            if(node->links[index]==NULL){

                return false;
            }

            node=node->links[index];
        }

        return node->end;
    }

    bool startsWith(string prefix) {

        Node* node=root;

        for(int i=0;i<prefix.size();i++){

            int index=prefix[i]-'a';

            if(node->links[index]==NULL){

                return false;
            }

            node=node->links[index];
        }

        return true;
    }
};