pipeline {
    agent { label 'docker-agent-alpine' }

    stages {
        stage('Install Build Tools') {
            steps {
                sh '''
                # Update apk and install build tools
                apk add --no-cache build-base cmake
                '''
            }
        }

        stage('Build Project') {
            steps {
                sh '''
                mkdir -p build
                cd build
                cmake ..
                make
                '''
            }
        }

        stage('Run Tests') {
            steps {
                sh './build/test_main'
            }
        }
    }

    post {
        always {
            echo "Build finished"
        }
    }
}
