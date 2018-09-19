queue, annoy = [], 0
for s in str(input()):
    queue = [x+1 for x in queue]
    if s == 'b':
        queue.append(0)
    elif s == 'f':
        annoy += sum(queue)
        queue = [0] + queue
    elif s == 'p':
        del queue[0]
print(annoy)
