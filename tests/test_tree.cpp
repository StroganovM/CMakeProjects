#include <../BinarTree/BinarTree.h>
#include <../gtest/gtest.h>

TEST(Tree_test, can_create) {
	TBinarTree<int> tree;
	/*void main() {
		TBinarTree<int> tree;
		tree.insert(5);
		tree.insert(4);
		tree.insert(3);
		tree.insert(2);
		tree.insert(1);
		std::cout << tree.find(1, tree.root)->data();
	}*/
}

TEST(Tree_test, can_insert) {
	TBinarTree<int> tree;
	tree.insert(5);
	tree.insert(4);
	tree.insert(3);
	tree.insert(2);
	tree.insert(1);
	tree.insert(0);
	tree.insert(-1);
	tree.insert(-2);
	tree.insert(-3);
	tree.insert(-4);
	tree.insert(-5);
	std::cout << tree.find(1)->data();
	std::cout << tree.find(2)->data();
	std::cout << tree.find(3)->data();
	std::cout << tree.find(4)->data();
	std::cout << tree.find(5)->data() << std::endl;
	printtreeBFS<int>(tree);
	std::cout << std::endl;
	printtreeDFSUP<int>(tree.root);
	std::cout << std::endl;
	printtreeDFSDOWNUP<int>(tree.root);
	std::cout << std::endl;
	printtreeDFSDOWNDOWN<int>(tree.root);
	std::cout << std::endl;
	tree.erase(tree.find(-5));
	tree.erase(tree.find(-4));
	tree.erase(tree.find(5));
	tree.erase(tree.find(4));
	tree.erase(tree.find(3));
	printtreeBFS<int>(tree);
	std::cout << std::endl;
	TBinarTree<int> tree2(tree);
	printtreeBFS<int>(tree2);
	std::cout << std::endl;
}

TEST(SearchTree_test, can_create) {
	TSearchTree<int> tree;
}

TEST(SearchTree_test, can_insert) {
	TSearchTree<int> tree;
	tree.insert(0);
	tree.insert(1);
	tree.insert(-1);
	tree.insert(5);
	tree.insert(4);
	tree.insert(3);
	tree.insert(2);
	tree.insert(-2);
	tree.insert(-3);
	tree.insert(-4);
	tree.insert(-5);
	std::cout << tree.find(1)->data();
	std::cout << tree.find(2)->data();
	std::cout << tree.find(3)->data();
	std::cout << tree.find(4)->data();
	std::cout << tree.find(5)->data() << std::endl;
	/*printtreeBFS<int>(tree);
	std::cout << std::endl;
	printtreeDFSUP<int>(tree.root);
	std::cout << std::endl;
	printtreeDFSDOWNUP<int>(tree.root);
	std::cout << std::endl;
	printtreeDFSDOWNDOWN<int>(tree.root);
	std::cout << std::endl;*/
	tree.erase(-5);
	tree.erase(-4);
	tree.erase(5);
	tree.erase(0);
	tree.erase(4);
	tree.erase(3);
}
