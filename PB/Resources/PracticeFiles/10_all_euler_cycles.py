from copy import deepcopy
from collections import deque


def degree(g, v):


def isolated_cycle(g, v):


def incoming(g, v):


def outgoing(g, v):


def bypass(g, u, v, w):


def dfs(g, v, visited):


def is_connected(g):


def create_string_from_path(path):


def all_euler_cycles(g):


def main():
    g = {
        'AT': ['TC'],
        'TC': ['CG'],
        'CG': ['GA', 'GG'],
        'GA': ['AT', 'AC'],
        'AC': ['CG'],
        'GG': ['GA']
    }
    all_cycles = set(all_euler_cycles(g))
    print(len(all_cycles), all_cycles)


if __name__ == '__main__':
    main()
