# ターゲット名：ソースファイル
# [Tab] コマンド
output: MEM30-C-1.c
	gcc -o output MEM30-C-1.c

# 生成ファイルの削除
clean:
	rm -f *~ output
