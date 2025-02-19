// #include<iostream>
// using namespace std;

// class Solution {
//   public:
//   int nodecount(struct Node* tree){
//       if(tree == NULL){
//           return 0;
//       }
//       int nodecnt= nodecount(tree->left) + nodecount(tree->right);
//       return nodecnt+1;
      
//   }
  
//   bool iscbt(struct Node*tree , int index , int nodecnt){
//       if(tree == NULL){
//           return true;
//       }
//      if (index >= nodecnt) {
//             return false;  // If index is out of bounds, return false
//         }
//       else{
//           bool left = iscbt(tree->left , 2*index+1 , nodecnt);
//           bool right = iscbt(tree->right , 2*index+2 , nodecnt);
//           return (left && right);
//       }
//   }
  
//   bool ismaxheap(struct Node* tree){
//            if((tree->right==NULL) && (tree->left == NULL)){
//                return true;
//            }
//            if(tree->right == NULL){
           
//                if(tree->left->data < tree->data){
//                    return true;
//                }
//                else{
//                    return false;
//                }
//            }
           
//            else{
//                bool left = ismaxheap(tree->left);
//                bool right = ismaxheap(tree->right);
               
//                if(left && right && (tree->data > tree->left->data && tree->right->data)){
//                    return true;
                   
//                }
//                else{
//                    return false;
//                }
//            }
//   }
//     bool isHeap(struct Node* tree) {
//         // code here
//         int index = 0;
//         int val = nodecount(tree);
//         if(iscbt(tree , index , val) && ismaxheap(tree)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
