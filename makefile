# ターゲット名：ソースファイル
# [Tab] コマンド
hello: ARR30-C-5.c
	gcc -o hello ARR30-C-5.c

# 生成ファイルの削除
clean:
	rm -f *~ hello
