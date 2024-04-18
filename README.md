
- <p align="center">

    <h1 align="center">AbsGS: Recovering Fine Details for 3D Gaussian Splatting</h1>
    <p align="center">
        <a href="https://github.com/TY424">Zongxin Ye</a><sup>+</sup>
      ·
      <a href="https://github.com/leo-frank">Wenyu Li</a><sup>+</sup>
      ·
      <a href="https://github.com/Liu-SD">Sidun Liu</a>
      ·
      <a>Peng Qiao</a>
      ·
      <a >Yong Dou</a>

  


    </p>
    
    <h3 align="center"> <a href="https://arxiv.org/pdf/2404.10484.pdf">arXiv</a> | <a href="https://ty424.github.io/AbsGS.github.io/">Project Page</a>  </h3>
    <div align="center"></div>

  </p>

  <p align="center">
    <a href="">
      <img src="./README.assets/image-20240418110728875.png" alt="Logo" width="100%">
    </a>
  </p>




  <p align="left">
  We reveal that the original adaptive density control strategy in 3D Gaussian Splatting (3D-GS) has the flaw of gradient collision which results in degradation, and propose homodirectional gradient as the guidance for densification. (a) Our method recovers fine details and achieves higher quality novel view synthesis results. SSIM, PSNR, LPIPS are inset. (b) Our proposed method yields more reasonable distribution of Gaussion points with comparable number of Gaussians and memory consumption with 3D-GS. (c) By adopting our method, the large Gaussians in over-reconstructed regions that lead to blur are eliminated.</p>

  <br>

​    

  # Citation

  If you find our code or paper useful, please cite

  ```bibtex
  @misc{ye2024absgs,
        title={AbsGS: Recovering Fine Details for 3D Gaussian Splatting}, 
        author={Zongxin Ye and Wenyu Li and Sidun Liu and Peng Qiao and Yong Dou},
        year={2024},
        eprint={2404.10484},
        archivePrefix={arXiv},
        primaryClass={cs.CV}
  }
  ```

  
