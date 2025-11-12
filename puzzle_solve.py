goal_state = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 0]
]

moves = [(-1, 0), (1, 0), (0, -1), (0, 1)]  
# Up, Down, Left, Right

def print_board(state):
    for row in state:
        print(row)
    print()

def get_zero_pos(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j

def is_goal(state):
    return state == goal_state

def is_legal(x, y):
    return 0 <= x < 3 and 0 <= y < 3

def generate_moves(state):
    next_states = []
    x, y = get_zero_pos(state)
    for dx, dy in moves:
        nx, ny = x + dx, y + dy
        if is_legal(nx, ny):
            new_state = [row[:] for row in state]
            new_state[x][y], new_state[nx][ny] = new_state[nx][ny], new_state[x][y]
            next_states.append(new_state)
    return next_states

def dfs_solver(initial_state):
    stack = [initial_state]
    visited = set()

    while stack:
        state = stack.pop()
        visited.add(tuple(tuple(row) for row in state))

        if is_goal(state):
            print("Solution found!\n")
            print_board(state)
            return True

        for next_state in generate_moves(state):
            t_state = tuple(tuple(row) for row in next_state)
            if t_state not in visited:
                stack.append(next_state)

    print("Solution not found!")
    return False

def main():
    initial_state = [
        [1, 2, 3],
        [4, 0, 6],
        [7, 5, 8]
    ]

    print("Initial State:\n")
    print_board(initial_state)

    dfs_solver(initial_state)

if __name__ == "__main__":
    main()
