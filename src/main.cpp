/*
 * main.cpp
 *
 *  Created on: Apr 15, 2019
 *      Author: d-w-h
 *
 *      Implementation of binary search tree
 */

#include <iostream>
#include <cstdlib>
#include "../inc/BST.hpp"

int main(int argc, char* argv[]) {
    BST bst;
    bool is_bst = false;

    bst.insert_node(33);
    bst.insert_node(40);
    bst.insert_node(23);
    bst.insert_node(58);
    bst.insert_node(48);
    bst.insert_node(28);
    bst.insert_node(11);
    bst.insert_node(13);
    bst.insert_node(22);
    bst.insert_node(39);
    bst.insert_node(25);
    bst.insert_node(29);
    bst.insert_node(70);
    bst.insert_node(47);
    bst.insert_node(64);
    bst.insert_node(26);
    bst.insert_node(65);
    bst.insert_node(31);
    bst.insert_node(49);
    bst.insert_node(50);
    bst.insert_node(10);
    bst.insert_node(6);
    bst.insert_node(8);
    bst.insert_node(9);
    bst.insert_node(-1);
    bst.insert_node(30);
    bst.print_tree();

    is_bst = bst.verify_bst_invariant();
    std::cout << "is_bst " << is_bst << std::endl;

    std::cout << "deleting node(s)" << std::endl;
    bst.delete_node(33);
    bst.delete_node(48);
    bst.delete_node(23);
    bst.print_tree();

    return 0;
}
