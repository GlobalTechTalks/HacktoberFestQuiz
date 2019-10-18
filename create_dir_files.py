import os
current_path = os.getcwd()

for i in range(1,21):
    p_name = 'problem_{}'.format(i)
    dirname = current_path + '/' + p_name
    if not os.path.exists(dirname):
        os.makedirs(dirname)
    os.chdir(dirname)
    
    code_ext = ['.py', '.c', '.java', '.cpp']
    for ext in code_ext:
        with open(p_name+'%s' % ext, 'w') as f:
            if ext != '.py':
                f.write("//Wirte your code logic here!")
            else:
                f.write("# Write your code logic here!")
    
