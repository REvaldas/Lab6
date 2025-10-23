pipeline {
    agent any

    stages {
        stage('Install Build Tools') {
            steps {
                sh '''
                set -x
                apt-get update
                apt-get install -y build-essential cmake git
                echo "✅ Installed build tools"
                '''
            }
        }

        stage('Build Project') {
            steps {
                sh '''
                set -x
                mkdir -p build
                cd build
                cmake ..
                make
                echo "✅ Build finished"
                '''
            }
        }

        stage('Run Tests') {
            steps {
                sh '''
                set -x
                cd build
                ./test_main
                echo "✅ Tests finished"
                '''
            }
        }
    }

    post {
        always {
            echo "🏁 Pipeline completed!"
        }
    }
}
